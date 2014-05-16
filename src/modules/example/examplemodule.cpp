/**
 * \file examplemodule.cpp
 * \author Thibault Schueller <ryp.sqrt@gmail.com>
 * \brief example module class
 */

#include "examplemodule.hpp"

#include "tools/version.hpp"

ExampleModule::ExampleModule(const std::string& name)
:   _name(name),
    _version(Version::buildVersionString(0, 1, 0))
{}

void ExampleModule::notify(const Event& event)
{
    static_cast<void>(event);
}

const std::string& ExampleModule::getName() const
{
    return (_name);
}

IModule::ModuleType ExampleModule::getType() const
{
    return (ModuleType::Logger);
}

const std::string& ExampleModule::getVersionString() const
{
    return (_version);
}
