/* Automatically generated by po2tbl.sed from etherape.pot.  */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include "libgettext.h"

const struct _msg_ent _msg_tbl[] = {
  {"", 1},
  {"mode of operation", 2},
  {"<ethernet|fddi|ip|tcp>", 3},
  {"set interface to listen to", 4},
  {"<interface name>", 5},
  {"set capture filter", 6},
  {"<capture filter>", 7},
  {"set input file", 8},
  {"<file name>", 9},
  {"don't convert addresses to names", 10},
  {"don't display any node text identification", 11},
  {"do not fade old links", 12},
  {"don't move nodes around", 13},
  {"limits nodes displayed", 14},
  {"<number of nodes>", 15},
  {"Don't show warnings", 16},
  {"set the node color", 17},
  {"color", 18},
  {"set the link color", 19},
  {"set the text color", 20},
  {"Unrecognized mode. Do etherape --help for a list of modes", 21},
  {"We could not load the interface! (%s)", 22},
  {"\
Stack Level is not set to Topmost Recognized Protocol. Please check in the \
preferences dialog that this is what you really want", 23},
  {"Preferences saved", 24},
  {"Error getting device: %s", 25},
  {"Error opening %s : %s - perhaps you need to be root?", 26},
  {"Can't open both %s and device %s. Please choose one.", 27},
  {"Error opening %s : %s", 28},
  {"%s opened for offline capture", 29},
  {"Link type is Ethernet", 30},
  {"Link type is RAW", 31},
  {"Link type is FDDI", 32},
  {"Link type is Token Ring", 33},
  {"Link type is NULL", 34},
  {"Link type not yet supported", 35},
  {"Mode not available in this device", 36},
  {"Ape mode not yet supported", 37},
  {"Can't use filter:  Couldn't obtain netmask info (%s).", 38},
  {"Unable to parse filter string (%s).", 39},
  {"Can't install filter (%s).", 40},
  {"Status not PAUSE or STOP at start_capture", 41},
  {"Starting live capture", 42},
  {"Starting offline capture", 43},
  {"Status not PLAY at pause_capture", 44},
  {"Pausing live capture", 45},
  {"Pausing offline capture", 46},
  {"Error while trying to pause capture", 47},
  {"Status not PLAY or PAUSE at stop_capture", 48},
  {"Stopping live capture", 49},
  {"Stopping offline capture", 50},
  {"Error while removing capture source in stop_capture", 51},
  {"Reached default in get_node_id", 52},
  {"Unsopported ape mode in get_link_id", 53},
  {"Creating node: %s. Number of nodes %d", 54},
  {"Creating link: %s-%s. Number of links %d", 55},
  {"Removing node: %s. Number of nodes %d", 56},
  {"Removing link. Number of links %d", 57},
  {"Null packet in check_packet", 58},
  {"No suitables interfaces for capture have been found", 59},
  {"Available interfaces for capture:", 60},
  {"Capture interface set to %s in GUI", 61},
  {"Mode set to %s in GUI", 62},
  {"Status not STOP or PAUSE at gui_start_capture", 63},
  {"Reading data from ", 64},
  {"default interface", 65},
  {" in Token Ring mode", 66},
  {" in FDDI mode", 67},
  {" in Ethernet mode", 68},
  {" in IP mode", 69},
  {" in TCP mode", 70},
  {" in UDP mode", 71},
  {"Diagram started", 72},
  {"Status not PLAY at gui_pause_capture", 73},
  {"Paused", 74},
  {"Diagram paused", 75},
  {"Status not PLAY or PAUSE at gui_stop_capture", 76},
  {"Ready to capture from ", 77},
  {"Diagram stopped", 78},
  {"Number of nodes: ", 79},
  {". Refresh Period: %d", 80},
  {". IDLE.", 81},
  {". TIMEOUT.", 82},
  {"Creating canvas_node: %s. Number of nodes %d", 83},
  {"Main node protocol not found in update_canvas_nodes", 84},
  {"Unknown value or node_size_variable", 85},
  {"Creating canvas_link: %s-%s. Number of links %d", 86},
  {"Main link protocol not found in update_canvas_links", 87},
  {"No node_id in on_node_info_delete_event", 88},
  {"No node_info_window in on_node_info_delete_event", 89},
  {"No info available", 90},
  {"Link main protocol: %s", 91},
  {"Link main protocol unknown", 92},
  {"Failed to open %s. No TCP or UDP services will be recognized", 93},
  {"Reading TCP and UDP services from %s", 94},
  {"Unable to  parse line %s", 95},
  {"DDP protocols not supported in %s", 96},
  {"EtherApe", 97},
  {"_Capture", 98},
  {"_Mode", 99},
  {"Set Token Ring mode", 100},
  {"Token _Ring", 101},
  {"Set FDDI mode", 102},
  {"_FDDI", 103},
  {"Set Ethernet mode", 104},
  {"_Ethernet", 105},
  {"Set IP mode", 106},
  {"_IP", 107},
  {"Set TCP mode", 108},
  {"_TCP", 109},
  {"Set UDP mode", 110},
  {"_UDP", 111},
  {"_Interfaces", 112},
  {"Start capture", 113},
  {"_Start", 114},
  {"Pause capture", 115},
  {"_Pause", 116},
  {"Stop capture", 117},
  {"St_op", 118},
  {"Show or hide the toolbar", 119},
  {"_Toolbar", 120},
  {"Show or hide the legend", 121},
  {"_Legend", 122},
  {"Show or hide the status bar", 123},
  {"_Status Bar", 124},
  {"Start", 125},
  {"Pause", 126},
  {"Stop", 127},
  {"Preferences (Ctrl-P)", 128},
  {"Pref.", 129},
  {"Protocols", 130},
  {"Copyright 2001 Juan Toledo", 131},
  {"\
A Graphical Network Browser.\n\
Web: http://etherape.sourceforge.net", 132},
  {"window1", 133},
  {"name", 134},
  {"accumulated", 135},
  {"average", 136},
  {"This message is not here yet. (Don�t tell anybody you saw it ;-) )", 137},
  {"Information", 138},
  {"EtherApe: Preferences", 139},
  {"Save", 140},
  {"Toggle whether text is shown on the diagram", 141},
  {"Click to toggle", 142},
  {"No text", 143},
  {"Max. Node Radius", 144},
  {"Max. Link Width", 145},
  {"\
Choose how node radius and link width are calculated as a function of \
average traffic", 146},
  {"Linear", 147},
  {"Logarithmic", 148},
  {"Square Root", 149},
  {"Size Mode", 150},
  {"Choose the font used to display text in the diagram", 151},
  {"Font", 152},
  {"Refresh diagram every this many miliseconds", 153},
  {"Diagram refresh period (ms)", 154},
  {"Set what level of the protocol stack is displayed in the legend", 155},
  {"Topmost recognized protocol", 156},
  {"Level 2 (Eg: ETH_II)", 157},
  {"Level 3 (Eg: IP)", 158},
  {"Level 4 (Eg: TCP)", 159},
  {"Level 5 (Eg: HTTP)", 160},
  {"Protocol Stack Level", 161},
  {"Instantaneous traffic (In+Out)", 162},
  {"Instantaneous traffic (Inbound)", 163},
  {"Instantaneous traffic (Outbound)", 164},
  {"Accumulated traffic (In+Out)", 165},
  {"Accumulated traffic (Inbound)", 166},
  {"Accumulated traffic (Outbound)", 167},
  {"Node size variable", 168},
  {"\
Remove this node from the diagram after this much time. 0 means never \
timeout.", 169},
  {"Diagram Node Timeout (ms)", 170},
  {"Diagram", 171},
  {"Capture filter", 172},
  {"Packet information is averaged for this amount of time", 173},
  {"Averaging Time (ms)", 174},
  {"Delete this link after this much time. 0 means never timeout.", 175},
  {"Link Timeout (ms)", 176},
  {"\
Delete this node from memory after this much time. 0 means never timeout.", 177},
  {"Node Timeout (ms)", 178},
  {"Capture", 179},
  {"Select Font", 180},
  {"EtherApe: Open Capture File", 181},
  {"EtherApe: Select capture file", 182},
  {"EtherApe: Select Capture File", 183},
  {"Select capture file", 184},
  {"Optionally, set a capture filter", 185},
  {"File:", 186},
  {"Filter:", 187},
  {"Name:", 188},
  {"This is a test node name", 189},
  {"Numeric Name:", 190},
  {"Show traffic", 191},
  {"Show protocols", 192},
  {"Instantaneous", 193},
  {"test label", 194},
  {"Accumulated", 195},
  {"Inst. Inbound", 196},
  {"Accu. Outbound", 197},
  {"Accu. Inbound", 198},
  {"Inst. Outbound", 199},
};

int _msg_tbl_length = 199;
