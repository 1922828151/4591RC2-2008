/*
 * func-name: sub_1010B3E0
 * func-address: 0x1010b3e0
 * callers: 0x1000fecf
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_1010B3E0(_DWORD *this)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  _DWORD *result; // eax
  bool v4; // zf
  _DWORD *v5; // edi

  v1 = (_DWORD **)this[1];
  v2 = *v1;
  *v1 = v1;
  result = (_DWORD *)this[1];
  result[1] = result;
  v4 = v2 == (_DWORD *)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v2;
      std::vector<Model *>::~vector<Model *>(v2 + 17);
      std::string::~string(v2 + 9);
      std::string::~string(v2 + 2);
      operator delete(v2);
      result = this;
      v2 = v5;
    }
    while ( v5 != (_DWORD *)this[1] );
  }
  return result;
}
