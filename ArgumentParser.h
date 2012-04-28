/** \class ArgumentParser
 * Argument parser
 *
 * @author  Christian Ammann (cammann@giants.ch)
 * @date  16/05/05
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _ARGUMENTPARSER_H_
#define _ARGUMENTPARSER_H_

#include <string>
#include <vector>

class ArgumentParser{
private:
        const std::vector<std::string> argv;

public:
	ArgumentParser(int m_argc, char* m_argv[]);

	bool is(const std::string& ) const;
        std::string getStr(const std::string& s, const std::string& defaultValue="") const;
        float getNumeric(const std::string& s, float defaultValue) const;
};

#endif
