#Samuel Jero <sjero@purdue.edu>
#SDN Testing Strategy Generation

drop_rates = [
	5,
	50,
]

dup_nums = [
	2,
	10,
]

delay_times = [
	100,
	1000,
]

divert_rates = [
	5,
	50,
]

message_actions = [
	#Name, format_string, list
	["DROP", "DROP,p={0}", drop_rates],
	["DUP", "DUP,t={0}", dup_nums],
	["DELAY", "DELAY,ms={0}", delay_times],
	["DIVERT", "DIVERT,p={0}", divert_rates],
#	["CDIVERT", "CDIVERT,p={0}&mfield={2}&mval={3}&sw={4}&ctl={5}",divert_rates],
]

field_actions = [
	#Name, format_string
	["LIE", "LIE,act={0}&val={1}"]
#	["CLIE", "LIE,act={0}&val={1}&mfield={2}&mval={3}"]
]

field_lies = [
	"=",
#	"+",
#	"-",
]

field_lie_values = {
	'uint8':[
		0,
		128,
		255,
		],
	'uint16':[
		0,
		32000,
		65535,
		],
	'uint32':[
		0,
		65535,
		4294967295,
		],
	'uint48':[
		0,
		65535,
		42949672954,
		],
	'uint64':[
		0,
		65535,
		8882949672954,
		],
	'uint128':[
		0,
		65535,
		888882949672954,
		],
	'port': [
		0,
		1,
		2,
		3,
		42,
		65533,
		4294967293,
	]
}
