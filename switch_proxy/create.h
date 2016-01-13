#ifndef _CREATE_H
#define _CREATE_H
extern "C" {
#include <loci/loci.h>
#include <loci/of_object.h>
#include <loci/of_match.h>
#include <loci/loci_obj_dump.h>
}
#include <map>
#include <string>

class OFCreator {
	public:
		of_object_t* create_message(int type, int ver, std::map<std::string,std::string> fields);

	private:
		of_object_t* create_port_status(int ver, std::map<std::string,std::string> fields);
};

#endif
