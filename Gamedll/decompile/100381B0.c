/*
 * func-name: sub_100381B0
 * func-address: 0x100381b0
 * callers: 0x10018782
 * callees: 0x10001dfc, 0x10005312, 0x100053b7, 0x1000ef7f, 0x10016f95, 0x1001a0f5, 0x102c9ea8
 */

GameClient::Robot *__thiscall sub_100381B0(int *this, int a2)
{
  int v2; // esi
  int *v4; // ebx
  int v5; // eax
  GameClient::Robot *result; // eax
  GameClient::Robot *v7; // esi

  v2 = a2;
  v4 = this + 3;
  if ( !this[3] )
  {
    a2 = *(_DWORD *)(a2 + 4);
    sub_1001A0F5(&unk_103B4EA8, (int)&a2);
    *v4 = v2;
  }
  if ( !this[50] )
    this[50] = v2;
  if ( !this[60] )
    this[60] = v2;
  v5 = sub_10001DFC(*(_DWORD *)(v2 + 292));
  result = (GameClient::Robot *)_RTDynamicCast(
                                  v5,
                                  0,
                                  &GameClient::WorldObject `RTTI Type Descriptor',
                                  &GameClient::Robot `RTTI Type Descriptor',
                                  0);
  v7 = result;
  if ( result )
  {
    GameClient::Robot::ChangeViewMode(result, 0);
    sub_1000EF7F(v7);
    sub_10005312((int)v7);
    return (GameClient::Robot *)sub_100053B7(v7);
  }
  return result;
}
