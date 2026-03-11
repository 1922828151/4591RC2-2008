/*
 * func-name: sub_102B9C80
 * func-address: 0x102b9c80
 * callers: 0x1000c0e5
 * callees: 0x102c7520, 0x102c9d62
 */

int __thiscall sub_102B9C80(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  void (__cdecl *v9)(); // ebx
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  char v14; // al
  int v16; // [esp+14h] [ebp-4Ch]
  _BYTE v17[28]; // [esp+18h] [ebp-48h] BYREF
  _BYTE v18[28]; // [esp+34h] [ebp-2Ch] BYREF
  int v19; // [esp+5Ch] [ebp-4h]

  v19 = 0;
  sub_102C7520(&a2);
  v9 = _invalid_parameter_noinfo;
  v16 = 0;
  v10 = this[1];
  if ( v10 > this[2] )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v11 = this[2];
    if ( this[1] > v11 )
    {
      v9();
      v9 = _invalid_parameter_noinfo;
    }
    if ( !this )
    {
      v9();
      v9 = _invalid_parameter_noinfo;
    }
    if ( v10 == v11 )
      break;
    if ( !this )
      v9();
    if ( v10 >= this[2] )
      v9();
    std::string::string(v18, (void *)(v10 + 4));
    LOBYTE(v19) = 1;
    if ( std::string::find(v18, "(", 0) != -1 )
    {
      v12 = std::string::find(v18, "(", 0);
      v13 = std::string::substr(v18, v17, 0, v12);
      LOBYTE(v19) = 2;
      std::string::operator=(v18, v13);
      LOBYTE(v19) = 1;
      std::string::~string(v17);
    }
    sub_102C7520(v18);
    v14 = std::operator==<char>(v18, &a2);
    LOBYTE(v19) = 0;
    if ( v14 )
    {
      std::string::~string(v18);
      v19 = -1;
      std::string::~string(&a2);
      return v16;
    }
    ++v16;
    std::string::~string(v18);
    if ( v10 >= this[2] )
      v9();
    v10 += 36;
  }
  v19 = -1;
  std::string::~string(&a2);
  return -1;
}
