/*
 * func-name: sub_10167490
 * func-address: 0x10167490
 * callers: 0x100084c2
 * callees: 0x10001dfc
 */

int __stdcall sub_10167490(Event *a1)
{
  int result; // eax
  struct BinStream *Stream; // eax
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // edi
  int v7; // edx
  char v8; // bl

  result = Event::GetSubID(a1);
  if ( result == 5009 )
  {
    Stream = Event::GetStream(a1);
    v3 = *((_DWORD *)Stream + 3) + 4;
    v4 = *((_DWORD *)Stream + 2);
    if ( v3 <= v4 )
      *((_DWORD *)Stream + 3) = v3;
    v5 = *((_DWORD *)Stream + 3);
    if ( v5 + 4 > v4 )
    {
      v6 = (int)a1;
    }
    else
    {
      v6 = *(_DWORD *)(v5 + *((_DWORD *)Stream + 1));
      *((_DWORD *)Stream + 3) = v5 + 4;
    }
    v7 = *((_DWORD *)Stream + 3);
    if ( v7 + 1 > v4 )
    {
      v8 = (char)a1;
    }
    else
    {
      v8 = *(_BYTE *)(v7 + *((_DWORD *)Stream + 1));
      *((_DWORD *)Stream + 3) = v7 + 1;
    }
    result = sub_10001DFC(v6);
    if ( result )
      *(_BYTE *)(result + 116) = v8;
  }
  return result;
}
