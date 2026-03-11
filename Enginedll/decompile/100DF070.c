/*
 * func-name: ?MarkLitItems@Light@@QAEXXZ
 * func-address: 0x100df070
 * callers: 0x10138880
 * callees: 0x10052ae0, 0x10057ee0, 0x1005f1c0, 0x1007a380, 0x100dda20, 0x100ee930, 0x101189f0, 0x1017a0b0
 */

void __thiscall Light::MarkLitItems(Light *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int i; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  char v8; // bl
  struct RenderDevice *v9; // eax
  unsigned int j; // ebx
  int v11; // edi
  int v12; // ecx
  int v13; // edi
  int v14; // ecx
  _DWORD *v15; // ecx
  void *v16; // eax
  void *v17; // eax
  float v18; // [esp+8h] [ebp-58h]
  int v19[2]; // [esp+1Ch] [ebp-44h] BYREF
  _DWORD v20[2]; // [esp+24h] [ebp-3Ch] BYREF
  _BYTE v21[16]; // [esp+2Ch] [ebp-34h] BYREF
  float v22[3]; // [esp+3Ch] [ebp-24h] BYREF
  int v23[5]; // [esp+48h] [ebp-18h] BYREF
  int v24; // [esp+5Ch] [ebp-4h]

  v24 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v23[4] = (int)&loc_101AEB72;
  v23[3] = (int)ExceptionList;
  if ( *((_DWORD *)this + 357) == 4 )
  {
    for ( i = 0; ; ++i )
    {
      v4 = *((_DWORD *)this + 178);
      v5 = *(_DWORD *)(v4 + 3224);
      if ( !v5 || i >= (*(_DWORD *)(v4 + 3228) - v5) >> 2 )
        break;
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 3224) + 4 * i);
      if ( *((_BYTE *)this + 1054) || !*(_BYTE *)(v6 + 725) )
      {
        v7 = *(_DWORD *)(v6 + 716);
        if ( v7
          && *(_BYTE *)(v6 + 1011)
          && (*(_BYTE *)(v6 + 421) && *((_BYTE *)this + 421) || *(_BYTE *)(v6 + 422) && *((_BYTE *)this + 422)) )
        {
          v19[0] = (int)this;
          sub_10052AE0((_DWORD *)(v7 + 288), v19);
        }
      }
    }
  }
  else
  {
    v8 = *((_BYTE *)this + 1054);
    if ( *((_BYTE *)this + 1420) )
    {
      v8 = 1;
      std::vector<Model *>::clear((_DWORD *)this + 311);
    }
    if ( !*((_BYTE *)this + 816) && *((float *)this + 273) > 0.0 )
    {
      if ( *((_BYTE *)this + 1052) )
      {
        if ( !*((_BYTE *)this + 1054)
          || (v9 = RenderDevice::Instance(),
              (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v9 + 228))(v9)) )
        {
          if ( *((float *)this + 284) <= 128.0 )
          {
            if ( v8 )
            {
              v19[0] = (int)&MarkActorLightsEmumerator::`vftable';
              v19[1] = (int)this;
              v16 = sub_1005F1C0();
              (*(void (__thiscall **)(void *, int, char *, _DWORD, _DWORD, int *))(*(_DWORD *)v16 + 44))(
                v16,
                3,
                (char *)this + 1112,
                *((float *)this + 284),
                0,
                v19);
            }
            else
            {
              v20[0] = &MarkActorLightsEmumerator::`vftable';
              v20[1] = this;
              v17 = sub_1005F1C0();
              (*(void (__thiscall **)(void *, int, char *, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)v17 + 44))(
                v17,
                2,
                (char *)this + 1112,
                *((float *)this + 284),
                0,
                v20);
            }
          }
          else
          {
            for ( j = 0; ; ++j )
            {
              v11 = *((_DWORD *)this + 178);
              v12 = *(_DWORD *)(v11 + 3224);
              if ( !v12 || j >= (*(_DWORD *)(v11 + 3228) - v12) >> 2 )
                break;
              v13 = *(_DWORD *)(*(_DWORD *)(v11 + 3224) + 4 * j);
              if ( !*(_BYTE *)(v13 + 725) || *((_BYTE *)this + 1054) )
              {
                v14 = *(_DWORD *)(v13 + 716);
                if ( v14 )
                {
                  if ( *(_BYTE *)(v13 + 1011) )
                  {
                    StaticModel::GetWorldBBox(v14, v21);
                    v18 = *((float *)this + 284);
                    v24 = 0;
                    if ( sub_1007A380(v22, (float *)v23, (float *)this + 278, v18)
                      && (*(_BYTE *)(v13 + 421) && *((_BYTE *)this + 421)
                       || *(_BYTE *)(v13 + 422) && *((_BYTE *)this + 422))
                      && (!*(_BYTE *)(v13 + 353) || !Light::IsExcluded(this, (struct Actor *)v13)) )
                    {
                      v15 = (_DWORD *)(*(_DWORD *)(v13 + 716) + 288);
                      v19[0] = (int)this;
                      sub_10052AE0(v15, v19);
                    }
                    v24 = -1;
                    sub_1017A0B0(v21);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
