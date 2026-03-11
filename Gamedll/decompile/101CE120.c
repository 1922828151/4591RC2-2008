/*
 * func-name: sub_101CE120
 * func-address: 0x101ce120
 * callers: 0x10010181
 * callees: 0x10006947, 0x1000a506, 0x1001766b
 */

void __stdcall sub_101CE120(float a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  float v4; // ecx
  GameClient::FuncManager *v5; // eax
  struct GameClient::Function *Function; // eax
  GameClient::Func_Power *v7; // edi
  struct BinStream *v8; // eax
  int v9; // ecx
  double v10; // st7
  unsigned int v11; // [esp+0h] [ebp-Ch]

  Stream = Event::GetStream((Event *)LODWORD(a1));
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = a1;
  }
  else
  {
    v4 = *(float *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  v11 = LODWORD(v4);
  v5 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v5, v11);
  v7 = Function;
  if ( Function && *((_DWORD *)Function + 10) == 5 )
  {
    v8 = Event::GetStream((Event *)LODWORD(a1));
    v9 = *((_DWORD *)v8 + 3);
    if ( (unsigned int)(v9 + 4) <= *((_DWORD *)v8 + 2) )
    {
      v10 = *(float *)(v9 + *((_DWORD *)v8 + 1));
      *((_DWORD *)v8 + 3) = v9 + 4;
      a1 = v10;
    }
    GameClient::Func_Power::SetHeat(v7, a1);
  }
}
