/* 
 *  Copyright (c) 2010,
 *  Gavriloaie Eugen-Andrei (shiretu@gmail.com)
 *  
 *  This file is part of crtmpserver.
 *  crtmpserver is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  crtmpserver is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with crtmpserver.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _FORMATTER_H
#define	_FORMATTER_H

#include "platform/platform.h"

class Formatter {
private:
	string _formatString;

	struct LogField {
		bool isField;
		string value;

		LogField() {
			isField = false;
			value = "";
		}
	};
	vector<LogField *> _fields;
private:
	Formatter();
public:
	virtual ~Formatter();
	static Formatter* GetInstance(string formatString);
	bool Init(string formatString);
	string Format(Variant &le);
};

#endif	/* _FORMATTER_H */