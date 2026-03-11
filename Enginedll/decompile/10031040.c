/*
 * func-name: sub_10031040
 * func-address: 0x10031040
 * callers: 0x10031b20, 0x10031ff0, 0x100325e0, 0x1016f6c0, 0x1016f820
 * callees: 0x101a2500
 */

void __thiscall sub_10031040(_DWORD *this)
{
  void **v2; // eax
  void *v3; // esi
  bool v4; // zf
  _DWORD **v5; // ecx
  _DWORD *v6; // eax
  void *v7; // ebx
  _DWORD *v8; // edi

  v2 = (void **)this[1];
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(this[1] + 4) = this[1];
  v4 = v3 == (void *)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD **)*((_DWORD *)v3 + 4);
      v6 = *v5;
      v7 = *(void **)v3;
      *v5 = v5;
      *(_DWORD *)(*((_DWORD *)v3 + 4) + 4) = *((_DWORD *)v3 + 4);
      v4 = v6 == *((_DWORD **)v3 + 4);
      *((_DWORD *)v3 + 5) = 0;
      if ( !v4 )
      {
        do
        {
          v8 = (_DWORD *)*v6;
          operator delete(v6);
          v6 = v8;
        }
        while ( v8 != *((_DWORD **)v3 + 4) );
      }
      operator delete(*((void **)v3 + 4));
      *((_DWORD *)v3 + 4) = 0;
      operator delete(v3);
      v3 = v7;
    }
    while ( v7 != (void *)this[1] );
  }
}
