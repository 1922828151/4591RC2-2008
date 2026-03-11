/*
 * func-name: sub_101CE250
 * func-address: 0x101ce250
 * callers: 0x1001230a
 * callees: 0x10006947, 0x1000a506
 */

struct GameClient::Function *__stdcall sub_101CE250(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // edx
  Event *v5; // ecx
  int v6; // edx
  GameClient::FuncManager *v7; // eax
  struct GameClient::Function *result; // eax
  struct GameClient::Function *v9; // esi
  int v10; // edi
  unsigned int Owner; // eax
  unsigned int v12; // [esp-4h] [ebp-14h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = *((_DWORD *)Stream + 2);
  v4 = v2 + 4;
  if ( v2 + 4 > v3 )
  {
    v5 = a1;
  }
  else
  {
    v5 = *(Event **)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4;
  }
  v6 = *((_DWORD *)Stream + 3);
  if ( v6 + 4 <= v3 )
    *((_DWORD *)Stream + 3) = v6 + 4;
  v12 = (unsigned int)v5;
  v7 = GameClient::FuncManager::Instance();
  result = GameClient::FuncManager::GetFunction(v7, v12);
  v9 = result;
  if ( result )
  {
    v10 = *(_DWORD *)result;
    Owner = Event::GetOwner(a1);
    return (struct GameClient::Function *)(*(int (__thiscall **)(struct GameClient::Function *, unsigned int))(v10 + 80))(
                                            v9,
                                            Owner);
  }
  return result;
}
