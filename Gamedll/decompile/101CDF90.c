/*
 * func-name: sub_101CDF90
 * func-address: 0x101cdf90
 * callers: 0x100023a1
 * callees: 0x10001dfc
 */

int __stdcall sub_101CDF90(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  int result; // eax
  int v6; // ebx
  int v7; // esi
  struct BinStream *v8; // eax
  int v9; // ecx

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
  v6 = result;
  if ( result )
  {
    v7 = -1;
    v8 = Event::GetStream(a1);
    v9 = *((_DWORD *)v8 + 3);
    if ( (unsigned int)(v9 + 4) <= *((_DWORD *)v8 + 2) )
    {
      v7 = *(_DWORD *)(v9 + *((_DWORD *)v8 + 1));
      *((_DWORD *)v8 + 3) = v9 + 4;
    }
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 48))(v6, v7);
  }
  return result;
}
