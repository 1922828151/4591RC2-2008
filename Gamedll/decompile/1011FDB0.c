/*
 * func-name: sub_1011FDB0
 * func-address: 0x1011fdb0
 * callers: 0x1000d21f
 * callees: 0x10002491
 */

int __thiscall sub_1011FDB0(_DWORD *this, Event *a2)
{
  struct BinStream *Stream; // eax
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  Event *v9; // ebx
  int v10; // edx
  int v11; // edi
  int v12; // edx
  int result; // eax

  Stream = Event::GetStream(a2);
  v4 = *((_DWORD *)Stream + 3);
  v5 = *((_DWORD *)Stream + 2);
  v6 = v4 + 4;
  if ( v4 + 4 > v5 )
  {
    v7 = (int)a2;
  }
  else
  {
    v7 = *(_DWORD *)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v6;
  }
  v8 = *((_DWORD *)Stream + 3);
  if ( v8 + 4 > v5 )
  {
    v9 = a2;
  }
  else
  {
    v9 = *(Event **)(v8 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v8 + 4;
  }
  v10 = *((_DWORD *)Stream + 3);
  v11 = v10 + 4;
  if ( v10 + 4 > v5 )
  {
    v12 = (int)a2;
  }
  else
  {
    v12 = *(_DWORD *)(v10 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v11;
  }
  result = this[1];
  if ( v9 == *(Event **)(result + 1108) )
    return sub_10002491(v7, v12);
  return result;
}
