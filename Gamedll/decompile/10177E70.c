/*
 * func-name: ?SetRebornFunction@Robot@GameClient@@QAEXK@Z_0
 * func-address: 0x10177e70
 * callers: 0x1001aa5f
 * callees: 0x10006947, 0x10006a19, 0x1000a097, 0x1000a506, 0x1000aa9c, 0x10014669, 0x10016a4f, 0x102c0ed0, 0x102c0f30, 0x102c26d0
 */

void __thiscall GameClient::Robot::SetRebornFunction(GameClient::Robot *this, unsigned int a2)
{
  GameClient::FuncManager *v3; // eax
  struct GameClient::Function *Function; // eax
  struct GameClient::Function *v5; // esi
  float *v6; // eax
  float *v7; // eax
  CameraHandler *v8; // eax
  float v9; // [esp+4h] [ebp-A0h]
  float v10; // [esp+8h] [ebp-9Ch]
  float v11; // [esp+18h] [ebp-8Ch]
  float v12; // [esp+18h] [ebp-8Ch]
  float v13; // [esp+1Ch] [ebp-88h]
  float v14; // [esp+20h] [ebp-84h]
  float v15; // [esp+24h] [ebp-80h]
  float v16; // [esp+28h] [ebp-7Ch]
  float v17; // [esp+2Ch] [ebp-78h]
  float v18; // [esp+30h] [ebp-74h]
  float v19; // [esp+34h] [ebp-70h]
  float v20; // [esp+38h] [ebp-6Ch]
  float v21; // [esp+3Ch] [ebp-68h]
  float v22[3]; // [esp+40h] [ebp-64h] BYREF
  _BYTE v23[12]; // [esp+4Ch] [ebp-58h] BYREF
  _BYTE v24[12]; // [esp+58h] [ebp-4Ch] BYREF
  _BYTE v25[64]; // [esp+64h] [ebp-40h] BYREF

  if ( GameClient::WorldObject::IsLocal(this) && sub_10016A4F(*((_DWORD *)this + 4)) )
  {
    v3 = GameClient::FuncManager::Instance();
    Function = GameClient::FuncManager::GetFunction(v3, a2);
    v5 = Function;
    if ( Function )
    {
      if ( *((_DWORD *)Function + 10) == 2 )
      {
        if ( *((_DWORD *)Function + 7) )
        {
          sub_10014669(v25);
          v11 = *(float *)(Input::Instance(0.0) + 1712) * 0.009999999776482582;
          v12 = *(float *)(Input::Instance(LODWORD(v11)) + 1716) * 0.009999999776482582;
          sub_102C26D0(v12, v9, v10);
          v6 = (float *)sub_102C0ED0(v24);
          v13 = *v6 * 2.0;
          v14 = v6[1] * 2.0;
          v15 = 2.0 * v6[2];
          v7 = (float *)sub_102C0F30(v23);
          v19 = *v7 * 2.400000095367432;
          v20 = v7[1] * 2.400000095367432;
          v21 = 2.400000095367432 * v7[2];
          v16 = *(float *)(*((_DWORD *)v5 + 7) + 24) + v19;
          v17 = *(float *)(*((_DWORD *)v5 + 7) + 28) + v20;
          v18 = *(float *)(*((_DWORD *)v5 + 7) + 32) + v21;
          v22[0] = v16 - v13;
          v22[1] = v17 - v14;
          v22[2] = v18 - v15;
          v8 = CameraHandler::Instance();
          CameraHandler::setToView(v8, (struct Vector *)v22, (struct Matrix *)v25, 0.0, 90.0);
        }
      }
    }
    else
    {
      *((_DWORD *)this + 229) = a2;
    }
  }
}
