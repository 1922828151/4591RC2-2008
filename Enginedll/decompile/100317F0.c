/*
 * func-name: sub_100317F0
 * func-address: 0x100317f0
 * callers: 0x10032060, 0x10032340, 0x10172c10
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_100317F0(_DWORD *this)
{
  void **v1; // eax
  char *v2; // ebx
  _DWORD *result; // eax
  bool v4; // zf
  char *v5; // ebp
  _DWORD **v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // ebp
  char *v9; // [esp+4h] [ebp-18h]

  v1 = (void **)this[1];
  v2 = (char *)*v1;
  *v1 = v1;
  result = (_DWORD *)this[1];
  result[1] = result;
  v4 = v2 == (char *)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = *(char **)v2;
      v9 = *(char **)v2;
      v6 = (_DWORD **)*((_DWORD *)v2 + 10);
      v7 = *v6;
      *v6 = v6;
      *(_DWORD *)(*((_DWORD *)v2 + 10) + 4) = *((_DWORD *)v2 + 10);
      v4 = v7 == *((_DWORD **)v2 + 10);
      *((_DWORD *)v2 + 11) = 0;
      if ( !v4 )
      {
        do
        {
          v8 = (_DWORD *)*v7;
          std::string::~string(v7 + 3);
          operator delete(v7);
          v7 = v8;
        }
        while ( v8 != *((_DWORD **)v2 + 10) );
        v5 = v9;
      }
      operator delete(*((void **)v2 + 10));
      *((_DWORD *)v2 + 10) = 0;
      std::string::~string(v2 + 8);
      operator delete(v2);
      result = this;
      v2 = v5;
    }
    while ( v5 != (char *)this[1] );
  }
  return result;
}
