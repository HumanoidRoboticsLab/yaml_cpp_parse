#include <iostream>
#include <Eigen/Dense>
#include <yaml-cpp/yaml.h>

bool ParticleYamlRead(std::string path, Eigen::Vector3d& unit)
{
    YAML::Node yaml_node;
    try
    {
        yaml_node = YAML::LoadFile(path.c_str());
        unit(0) = yaml_node["momentum_gain"]["kp"].as<double>();
        unit(1) = yaml_node["momentum_gain"]["ki"].as<double>();
        unit(2) = yaml_node["momentum_gain"]["kd"].as<double>();
    }
    catch(const std::exception& e)
    {
        std::cerr << "fail to read particle yaml file" <<std::endl;
        return false;
    }
    return true;
}

int main()
{
    Eigen::Vector3d unit;
    ParticleYamlRead("../data/param.yaml", unit);
    std::cout << unit << std::endl;
    return 0;
}