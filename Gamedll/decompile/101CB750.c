/*
 * func-name: ?OnBegin@UpdateStockObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101cb750
 * callers: 0x10010ec4
 * callees: 0x10006947, 0x1000a506, 0x10012968, 0x102c9d50, 0x102c9ea8
 */

void __thiscall GameClient::UpdateStockObserver::OnBegin(GameClient::UpdateStockObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v4; // ecx
  int v5; // edx
  struct Event *v6; // ecx
  GameClient::FuncManager *v7; // eax
  struct GameClient::Function *Function; // eax
  int v9; // ebp
  int v10; // esi
  struct BinStream *v11; // eax
  int v12; // ecx
  struct BinStream *v13; // eax
  int v14; // ecx
  unsigned int v15; // esi
  int v16; // ecx
  unsigned int v17; // [esp-4h] [ebp-40h]
  int v18; // [esp+14h] [ebp-28h]
  _DWORD v19[2]; // [esp+18h] [ebp-24h] BYREF
  int v20; // [esp+20h] [ebp-1Ch] BYREF
  void *v21; // [esp+24h] [ebp-18h]
  int v22; // [esp+28h] [ebp-14h]
  int v23; // [esp+2Ch] [ebp-10h]
  int v24; // [esp+38h] [ebp-4h]
  struct Event *v25; // [esp+40h] [ebp+4h]

  Stream = Event::GetStream(a2);
  v4 = *((_DWORD *)Stream + 3);
  v5 = v4 + 4;
  if ( (unsigned int)(v4 + 4) > *((_DWORD *)Stream + 2) )
  {
    v6 = a2;
  }
  else
  {
    v6 = *(struct Event **)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5;
  }
  v17 = (unsigned int)v6;
  v7 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v7, v17);
  if ( Function )
  {
    v9 = _RTDynamicCast(
           Function,
           0,
           &GameClient::Function `RTTI Type Descriptor',
           &GameClient::Func_Receive `RTTI Type Descriptor',
           0);
    v18 = v9;
    if ( v9 )
    {
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v10 = 0;
      v11 = Event::GetStream(a2);
      v12 = *((_DWORD *)v11 + 3);
      if ( (unsigned int)(v12 + 4) <= *((_DWORD *)v11 + 2) )
      {
        v10 = *(_DWORD *)(v12 + *((_DWORD *)v11 + 1));
        *((_DWORD *)v11 + 3) = v12 + 4;
      }
      if ( v10 > 0 )
      {
        v25 = (struct Event *)v10;
        do
        {
          v13 = Event::GetStream(a2);
          v14 = *((_DWORD *)v13 + 3);
          v15 = *((_DWORD *)v13 + 2);
          if ( v14 + 4 <= v15 )
          {
            v9 = v18;
            v19[0] = *(_DWORD *)(v14 + *((_DWORD *)v13 + 1));
            *((_DWORD *)v13 + 3) = v14 + 4;
          }
          v16 = *((_DWORD *)v13 + 3);
          if ( v16 + 4 <= v15 )
          {
            v19[1] = *(_DWORD *)(v16 + *((_DWORD *)v13 + 1));
            *((_DWORD *)v13 + 3) = v16 + 4;
          }
          sub_10012968((int)v19);
          v25 = (struct Event *)((char *)v25 - 1);
        }
        while ( v25 );
      }
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v9 + 60))(v9, &v20);
      if ( v21 )
        operator delete(v21);
    }
  }
}
