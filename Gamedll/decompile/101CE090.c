/*
 * func-name: sub_101CE090
 * func-address: 0x101ce090
 * callers: 0x1001578a
 * callees: 0x1000209a, 0x10006947, 0x1000a506
 */

void __stdcall sub_101CE090(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  Event *v4; // ecx
  GameClient::FuncManager *v5; // eax
  struct GameClient::Function *Function; // eax
  GameClient::Func_Power *v7; // edi
  struct BinStream *v8; // eax
  int v9; // ecx
  double v10; // st7
  unsigned int v11; // [esp+0h] [ebp-14h]
  double v12; // [esp+Ch] [ebp-8h]
  float v13; // [esp+18h] [ebp+4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = a1;
  }
  else
  {
    v4 = *(Event **)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  v11 = (unsigned int)v4;
  v5 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v5, v11);
  v7 = Function;
  if ( Function && *((_DWORD *)Function + 10) == 5 )
  {
    v8 = Event::GetStream(a1);
    v9 = *((_DWORD *)v8 + 3);
    if ( (unsigned int)(v9 + 8) > *((_DWORD *)v8 + 2) )
    {
      v10 = v12;
    }
    else
    {
      v10 = *(double *)(v9 + *((_DWORD *)v8 + 1));
      *((_DWORD *)v8 + 3) = v9 + 8;
    }
    v13 = v10;
    GameClient::Func_Power::SetHyperEnergy(v7, v13);
  }
}
