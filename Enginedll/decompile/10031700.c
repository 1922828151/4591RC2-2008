/*
 * func-name: sub_10031700
 * func-address: 0x10031700
 * callers: 0x100323b0, 0x10032760, 0x10033040, 0x10172c10, 0x10173030
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_10031700(_DWORD *this)
{
  void **v1; // eax
  char *v2; // edi
  _DWORD *result; // eax
  bool v4; // zf
  char *v5; // ebx
  int v6; // ebp
  int i; // [esp+4h] [ebp-1Ch]

  v1 = (void **)this[1];
  v2 = (char *)*v1;
  *v1 = v1;
  *(_DWORD *)(this[1] + 4) = this[1];
  result = 0;
  v4 = v2 == (char *)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = *(char **)v2;
      v6 = *((_DWORD *)v2 + 26);
      if ( v6 )
      {
        for ( i = *((_DWORD *)v2 + 27); v6 != i; v6 += 28 )
          std::string::~string(v6);
        operator delete(*((void **)v2 + 26));
      }
      *((_DWORD *)v2 + 26) = 0;
      *((_DWORD *)v2 + 27) = 0;
      *((_DWORD *)v2 + 28) = 0;
      std::string::~string(v2 + 64);
      std::string::~string(v2 + 36);
      std::string::~string(v2 + 8);
      operator delete(v2);
      result = this;
      v2 = v5;
    }
    while ( v5 != (char *)this[1] );
  }
  return result;
}
