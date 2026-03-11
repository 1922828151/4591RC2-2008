/*
 * func-name: sub_10005690
 * func-address: 0x10005690
 * callers: none
 * callees: 0x10019750
 */

_BYTE *__cdecl sub_10005690(_BYTE *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _BYTE *v14; // ecx
  int v15; // eax
  int v17; // [esp-4h] [ebp-64h]
  _BYTE v18[28]; // [esp+18h] [ebp-48h] BYREF
  _BYTE v19[28]; // [esp+34h] [ebp-2Ch] BYREF
  int v20; // [esp+5Ch] [ebp-4h]

  v20 = 1;
  v9 = a9 + 1;
  std::string::string(v19, &a2);
  LOBYTE(v20) = 2;
  std::string::string(a1);
  if ( v9 > 0 )
  {
    do
    {
      if ( std::string::find(v19, " ", 0) == -1 )
      {
        v15 = std::string::length(v19);
        v13 = std::string::substr(v19, v18, 0, v15);
        LOBYTE(v20) = 5;
        v14 = a1;
      }
      else
      {
        v10 = std::string::find(v19, " ", 0);
        v11 = std::string::substr(v19, v18, 0, v10);
        LOBYTE(v20) = 3;
        std::string::operator=(a1, v11);
        LOBYTE(v20) = 2;
        std::string::~string(v18);
        v17 = std::string::length(v19);
        v12 = std::string::find(v19, " ", 0);
        v13 = std::string::substr(v19, v18, v12 + 1, v17);
        LOBYTE(v20) = 4;
        v14 = v19;
      }
      std::string::operator=(v14, v13);
      LOBYTE(v20) = 2;
      std::string::~string(v18);
      --v9;
    }
    while ( v9 );
  }
  LOBYTE(v20) = 1;
  std::string::~string(v19);
  LOBYTE(v20) = 0;
  std::string::~string(&a2);
  return a1;
}
