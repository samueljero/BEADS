message_actions = [
	"DROP",
	"DUP",
	"DELAY",
	"DIVERT",
	"CDIVERT",
]

field_actions = [
	"LIE",
	"CLIE",
]

field_lies = [
	"=",
	"+",
	"-",
]

field_lie_values = {
	'uint8':[0,128,255],
	'uint16':[0,32000,65535],
	'uint32':[],
	'uint48':[],
	'uint64':[],
	'uint128':[],
}
