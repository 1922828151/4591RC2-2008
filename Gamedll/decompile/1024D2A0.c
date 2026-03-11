/*
 * func-name: sub_1024D2A0
 * func-address: 0x1024d2a0
 * callers: 0x100187d7
 * callees: none
 */

struct BinStream *__thiscall sub_1024D2A0(struct BinStream *this, Event *a2)
{
  struct BinStream *result; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ebx
  int v7; // edi
  struct BinStream *Stream; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v15; // [esp+Ch] [ebp+4h]

  result = (struct BinStream *)Event::GetSubID(a2);
  if ( result == (struct BinStream *)5331 )
  {
    v4 = 0;
    result = Event::GetStream(a2);
    v5 = *((_DWORD *)result + 3);
    if ( (unsigned int)(v5 + 4) <= *((_DWORD *)result + 2) )
    {
      v4 = *(_DWORD *)(v5 + *((_DWORD *)result + 1));
      *((_DWORD *)result + 3) = v5 + 4;
    }
    if ( v4 )
    {
      v15 = v4;
      do
      {
        v6 = 0;
        v7 = 0;
        Stream = Event::GetStream(a2);
        v9 = *((_DWORD *)Stream + 3);
        v10 = *((_DWORD *)Stream + 2);
        if ( v9 + 4 <= v10 )
        {
          v6 = *(_DWORD *)(v9 + *((_DWORD *)Stream + 1));
          *((_DWORD *)Stream + 3) = v9 + 4;
        }
        v11 = *((_DWORD *)Stream + 3);
        if ( v11 + 4 <= v10 )
        {
          v7 = *(_DWORD *)(v11 + *((_DWORD *)Stream + 1));
          *((_DWORD *)Stream + 3) = v11 + 4;
        }
        v12 = *((_DWORD *)Stream + 3) + 4;
        if ( v12 <= v10 )
          *((_DWORD *)Stream + 3) = v12;
        v13 = *((_DWORD *)Stream + 3) + 4;
        if ( v13 <= v10 )
          *((_DWORD *)Stream + 3) = v13;
        result = this;
        if ( v7 == *((_DWORD *)this + 1) )
          *((_DWORD *)this + 2) = v6;
        --v15;
      }
      while ( v15 );
    }
  }
  return result;
}
