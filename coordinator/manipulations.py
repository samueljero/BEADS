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
#	"CDIVERT",
]



field_actions = [
	"LIE",
#	"CLIE",
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
		255
		],
	'uint16':[
		0,
		32000
		,65535
		],
	'uint32':[],
	'uint48':[],
	'uint64':[],
	'uint128':[],
}
