#include "yaml-cpp/include/yaml-cpp/yaml.h"
#include <iostream>

using namespace std;

void printRow(YAML::const_iterator e) {
  cout << "|" << e->first << "|"
       << "<img src=\"https://s-christy.com/icons/" << e->second["lang"]
       << ".png\" height=20></img>"
       << "<a href=\"" << e->second["link"] << "\">Sample</a>"
       << "|" << e->second["description"] << "|" << endl;
}

void usage(char *name) { cout << "Usage: " << name << " <file>" << endl; }

int main(int argc, char *argv[]) {
  if (argc != 2) {
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }

  cout << "|Skill|Example|Description|" << endl;
  YAML::Node config = YAML::LoadFile(argv[1]);

  YAML::Node skills = config["skills"];
  for (YAML::const_iterator e = skills.begin(); e != skills.end(); ++e) {
    printRow(e);
  }
}
