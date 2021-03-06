/*
 * Copyright (C) 2014 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#include <string>
#include "robocup_gamecontroller_plugin/GameControllerPlugin.hh"
#include "robocup_gamecontroller_plugin/states/GameOverState.hh"

using namespace gazebo;

/////////////////////////////////////////////////
GameOverState::GameOverState(const std::string &_name,
                             GameControllerPlugin *_plugin)
  : State(_name, _plugin)
{
}

/////////////////////////////////////////////////
void GameOverState::Initialize()
{
  State::Initialize();

  this->plugin->StopClock();
}

/////////////////////////////////////////////////
void GameOverState::Update()
{
}
