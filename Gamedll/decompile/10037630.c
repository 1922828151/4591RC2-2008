/*
 * func-name: sub_10037630
 * func-address: 0x10037630
 * callers: none
 * callees: 0x10006802, 0x10006947, 0x100077ed, 0x10008760, 0x1000a506, 0x100108fc, 0x100131ba, 0x10013647, 0x1001a5e6
 */

void __thiscall sub_10037630(int this, float a2)
{
  double v3; // st7
  bool v4; // zf
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  GameClient::FuncManager *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+8h] [ebp-24h]
  unsigned int v13; // [esp+8h] [ebp-24h]
  int v14; // [esp+Ch] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-10h] BYREF
  int v16; // [esp+28h] [ebp-4h]

  a2 = a2 + *(float *)(this + 312);
  v3 = a2;
  *(float *)(this + 312) = a2;
  if ( *(float *)(this + 308) > v3 )
    return;
  v4 = *(_BYTE *)(this + 338) == 1;
  *(float *)(this + 312) = 0.0;
  if ( v4 )
  {
    v5 = *(_DWORD *)(this + 304);
    v6 = *(_DWORD *)(v5 + 360);
    if ( v6 != 2 && v6 != 3 || *(float *)(v5 + 404) > 0.0 )
      return;
    *(_BYTE *)(this + 338) = 0;
  }
  if ( *(float *)(*(_DWORD *)(this + 304) + 400) <= 0.0 )
  {
    v7 = *(_DWORD *)(this + 332);
    if ( v7 )
    {
      if ( *(_BYTE *)(this + 337) )
      {
        v11 = *(_DWORD *)(this + 340);
        if ( v11 != 1 )
        {
          if ( v11 == 3 )
          {
            *(_BYTE *)(this + 337) = 0;
            *(_DWORD *)(this + 340) = 0;
          }
          else
          {
            sub_100131BA();
            *(_DWORD *)(this + 12) = *(_DWORD *)sub_100108FC();
          }
        }
      }
      else
      {
        v10 = *(_DWORD *)(this + 300);
        *(_BYTE *)(this + 337) = 1;
        *(_DWORD *)(this + 340) = 1;
        (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 72))(v7, v10, this + 316, 1);
      }
    }
    else
    {
      sub_1001A5E6(*(_DWORD *)(this + 300), v14);
      v8 = sub_10008760(v12);
      v15 = v8;
      if ( v8 )
      {
        if ( *(_BYTE *)(this + 336) )
        {
          v13 = v8;
          v9 = GameClient::FuncManager::Instance();
          *(_DWORD *)(this + 332) = GameClient::FuncManager::GetFunction(v9, v13);
        }
        else
        {
          *(_BYTE *)(this + 336) = 1;
          sub_100077ED((int)&a2, 9, 235, COERCE_INT(0.0), 1, 512);
          v16 = 0;
          sub_10006802((int)&v15);
          j_nullsub_44((int)&a2);
          v16 = -1;
          if ( a2 != 0.0 )
            Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(a2));
        }
      }
    }
  }
}
