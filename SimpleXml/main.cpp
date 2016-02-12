#include <iostream>
using namespace std;

#include "simple_xml_writer.h"

int main()
{
	XmlWriter xml("test.xml");
	xml.beginDocument();
	xml.beginElement("employees");

	xml.beginElement("employee");
	xml.attribute("name", "batman");

	xml.beginElement("info");

	xml.comment("Hello world, here is a comment");

	xml.beginElement("address");
	xml.characters("1007 Mountain Drive, Gotham");
	xml.endElement(); // address

	xml.beginElement("vehicle");
	xml.characters("The Batmobile");
	xml.endElement(); // vehicle

	xml.endElement(); // info

	xml.beginElement("associates");
	
	xml.beginElement("associate");

	xml.beginElement("name");
	xml.characters("Robin");
	xml.endElement(); // name

	xml.endElement(); // associate

	xml.endElement(); // associates

	xml.endElement(); // employee

	xml.endElement(); // employees
	xml.close();

	system("pause");
	return 0;
}