/*
 * func-name: ?checkRebornFunc@Robot@GameClient@@IAEXXZ_0
 * func-address: 0x101749c0
 * callers: 0x1000c3ec
 * callees: 0x10006947, 0x1000a506, 0x10016a4f, 0x102c1be0
 */

void __thiscall GameClient::Robot::checkRebornFunc(GameClient::Robot *this)
{
  GameClient::FuncManager *v2; // eax
  struct GameClient::Function *Function; // eax
  struct GameClient::Function *v4; // edi
  float *v5; // eax
  double v6; // st7
  void (__thiscall *v7)(GameClient::Robot *, float *); // edx
  unsigned int v8; // [esp-8h] [ebp-2Ch]
  float v9; // [esp+4h] [ebp-20h]
  float v10; // [esp+8h] [ebp-1Ch]
  float v11; // [esp+Ch] [ebp-18h] BYREF
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 229) != -1 )
  {
    if ( sub_10016A4F(*((_DWORD *)this + 4)) )
    {
      v8 = *((_DWORD *)this + 229);
      v2 = GameClient::FuncManager::Instance();
      Function = GameClient::FuncManager::GetFunction(v2, v8);
      v4 = Function;
      if ( Function )
      {
        if ( *((_DWORD *)Function + 10) == 2 )
        {
          v11 = 0.0;
          v12 = 0.0;
          v13 = 0.0;
          sub_102C1BE0((char *)Function + 124, &v11);
          v5 = (float *)*((_DWORD *)v4 + 7);
          v6 = v5[7] + v12;
          v7 = *(void (__thiscall **)(GameClient::Robot *, float *))(*(_DWORD *)this + 36);
          v5 += 6;
          v9 = v6;
          v10 = v5[2] + v13;
          v14[0] = *v5 + v11;
          v14[1] = v9;
          v14[2] = v10;
          v7(this, v14);
          *((_DWORD *)this + 229) = -1;
        }
      }
    }
  }
}
