/*
 * func-name: sub_101673E0
 * func-address: 0x101673e0
 * callers: 0x10019f65
 * callees: 0x10001dfc
 */

int __stdcall sub_101673E0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  int result; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  int (__thiscall **v8)(_DWORD *, struct BinStream *); // esi
  struct BinStream *v9; // eax
  _DWORD *v10; // edi
  int (__thiscall **v11)(_DWORD *, struct BinStream *); // esi
  struct BinStream *v12; // eax

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = (int)a1;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  result = sub_10001DFC(v4);
  v6 = (_DWORD *)result;
  if ( result )
  {
    result = Event::GetSubID(a1);
    if ( result == 5005 )
    {
      result = v6[28];
      if ( result == 1 || result == 4 || result == 8 || result == 16 )
      {
        v10 = v6 + 37;
        v11 = (int (__thiscall **)(_DWORD *, struct BinStream *))(v6[37] + 4);
        v12 = Event::GetStream(a1);
        return (*v11)(v10, v12);
      }
      else if ( result == 2 )
      {
        v7 = v6 + 195;
        v8 = (int (__thiscall **)(_DWORD *, struct BinStream *))(v6[195] + 4);
        v9 = Event::GetStream(a1);
        return (*v8)(v7, v9);
      }
    }
  }
  return result;
}
