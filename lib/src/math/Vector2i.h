/*
* Viry3D
* Copyright 2014-2018 by Stack - stackos@qq.com
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
*/

#pragma once

namespace Viry3D
{
    struct Vector2i
    {
        Vector2i(int x = 0, int y = 0): x(x), y(y) { }

        Vector2i operator -(const Vector2i& right) const
        {
            return Vector2i(x - right.x, y - right.y);
        }

        static int Dot(const Vector2i& left, const Vector2i& right)
        {
            return left.x * right.x + left.y * right.y;
        }

        static int Cross(const Vector2i& left, const Vector2i& right)
        {
            return left.x * right.y - left.y * right.x;
        }

        int x;
        int y;
    };
}
