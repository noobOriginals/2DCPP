#include <bin.hpp>

struct marker_mapping {
	long start = 0xffd8;
	long appDefHeader = 0xffe0;
	long quanTable = 0xffdb;
	long startFrame = 0xffc0;
	long huffmanTable = 0xffc4;
	long startScan = 0xffda;
	long end = 0xffd9;
};

void read(string filepath) {
	fstream file(filepath, ios::in | ios::binary);
	string data;
	while (true) {
		file.read((char*)&data, sizeof(string));
		cout << data << "\n";
		if (!file) {
			break;
		}
	}
}

void write(string filepath, string data) {
	fstream file(filepath, ios::out | ios::binary);
	file.write((char*)&data, sizeof(string));
}
