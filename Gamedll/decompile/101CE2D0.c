/*
 * func-name: sub_101CE2D0
 * func-address: 0x101ce2d0
 * callers: 0x1000c6c1
 * callees: 0x1000a097, 0x1000a3a8, 0x1000aa9c, 0x1000ed13, 0x10016a4f, 0x10017eb3, 0x10018e71
 */

void __stdcall sub_101CE2D0(Event *a1)
{
  char Owner; // al
  int v2; // esi
  char v3; // bl
  struct BinStream *Stream; // eax
  int v5; // ecx
  GameClient::RobotManager *v6; // eax
  struct GameClient::Robot *Robot; // esi
  CameraHandler *v8; // eax
  int v9; // [esp+4h] [ebp-64h]
  float v10; // [esp+4h] [ebp-64h]
  float v11; // [esp+10h] [ebp-58h] BYREF
  float v12; // [esp+14h] [ebp-54h]
  float v13; // [esp+18h] [ebp-50h]
  int v14[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  _BYTE v15[64]; // [esp+28h] [ebp-40h] BYREF

  Owner = Event::GetOwner(a1);
  v2 = sub_10016A4F(Owner);
  if ( v2 )
  {
    v3 = 0;
    Stream = Event::GetStream(a1);
    v5 = *((_DWORD *)Stream + 3);
    if ( (unsigned int)(v5 + 1) <= *((_DWORD *)Stream + 2) )
    {
      v3 = *(_BYTE *)(v5 + *((_DWORD *)Stream + 1));
      *((_DWORD *)Stream + 3) = v5 + 1;
    }
    if ( !*(_BYTE *)(v2 + 304) )
      *(_BYTE *)(v2 + 304) = v3;
    if ( v3 )
    {
      v9 = *(_DWORD *)(v2 + 292);
      v6 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v6, v9);
      if ( Robot )
      {
        v11 = 0.0;
        v12 = 0.0;
        v13 = 0.0;
        Event::GetStream(a1);
        sub_10017EB3((int)&v11);
        v12 = 300.0;
        *(float *)v14 = 0.0;
        *(float *)&v14[1] = -0.99000001;
        *(float *)&v14[2] = 0.0099999998;
        sub_10018E71(v15, (int)v14);
        v10 = *((float *)Robot + 167);
        v8 = CameraHandler::Instance();
        CameraHandler::setToView(v8, (struct Vector *)&v11, (struct Matrix *)v15, 0.0, v10);
      }
    }
  }
}
