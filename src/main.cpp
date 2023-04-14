#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <yaml-cpp/node/detail/iterator_fwd.h>
#include <yaml-cpp/yaml.h>

using namespace std;

vector<YAML::const_iterator> elements;

void printRow(YAML::const_iterator e) {
  cout << "|" << e->second["category"] << " - " << e->first << "|"
       << "<img src=\"https://s-christy.com/icons/" << e->second["lang"]
       << ".png\" height=20></img>"
       << "<a href=\"" << e->second["link"] << "\">Sample</a>"
       << "|" << e->second["description"] << "|" << endl;
}

bool compare_function(YAML::const_iterator a, YAML::const_iterator b) {
  return a->second["category"].as<string>() <
         b->second["category"].as<string>();
}

void usage(char *name) { cout << "Usage: " << name << " <file>" << endl; }

int main(int argc, char *argv[]) {
  if (argc != 2) {
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }

  cout << "|Skill|Example|Description|" << endl;
  cout << "|-----|-------|-----------|" << endl;
  YAML::Node config = YAML::LoadFile(argv[1]);

  YAML::Node skills = config["skills"];
  for (YAML::const_iterator e = skills.begin(); e != skills.end(); ++e) {
    elements.push_back(e);
  }

  std::sort(elements.begin(), elements.end(), compare_function);

  for (auto e : elements) {
    printRow(e);
  }
}
