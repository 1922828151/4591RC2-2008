/*
 * func-name: sub_100F78A0
 * func-address: 0x100f78a0
 * callers: 0x100f8280, 0x101b90b0
 * callees: 0x101a2500
 */

void __thiscall sub_100F78A0(_DWORD *this)
{
  _DWORD *v1; // ebx
  void **v2; // eax
  char *v3; // edi
  bool v4; // zf
  _DWORD **v5; // ecx
  _DWORD *v6; // eax
  char *v7; // ebp
  _DWORD *v8; // ebx

  v1 = this;
  v2 = (void **)this[1];
  v3 = (char *)*v2;
  *v2 = v2;
  *(_DWORD *)(this[1] + 4) = this[1];
  v4 = v3 == (char *)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD **)*((_DWORD *)v3 + 10);
      v6 = *v5;
      v7 = *(char **)v3;
      *v5 = v5;
      *(_DWORD *)(*((_DWORD *)v3 + 10) + 4) = *((_DWORD *)v3 + 10);
      v4 = v6 == *((_DWORD **)v3 + 10);
      *((_DWORD *)v3 + 11) = 0;
      if ( !v4 )
      {
        do
        {
          v8 = (_DWORD *)*v6;
          operator delete(v6);
          v6 = v8;
        }
        while ( v8 != *((_DWORD **)v3 + 10) );
        v1 = this;
      }
      operator delete(*((void **)v3 + 10));
      *((_DWORD *)v3 + 10) = 0;
      std::string::~string(v3 + 8);
      operator delete(v3);
      v3 = v7;
    }
    while ( v7 != (char *)v1[1] );
  }
}
