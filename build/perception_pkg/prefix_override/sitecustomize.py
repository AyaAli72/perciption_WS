import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mido/Pictures/Aya workspace Version 1/aya_ws/install/perception_pkg'
