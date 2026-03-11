/*
 * func-name: ??4ShaderVar@@QAEAAU0@ABU0@@Z
 * func-address: 0x100186b0
 * callers: 0x10018810, 0x1005e1c0
 * callees: none
 */

char *__thiscall ShaderVar::operator=(char *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // edx
  _BYTE *v6; // eax
  int v7; // ebp

  *(_DWORD *)this = *(_DWORD *)a2;
  std::string::operator=(this + 4, a2 + 4);
  std::string::operator=(this + 32, a2 + 32);
  *((_DWORD *)this + 15) = *(_DWORD *)(a2 + 60);
  *((_DWORD *)this + 16) = *(_DWORD *)(a2 + 64);
  *((_DWORD *)this + 17) = *(_DWORD *)(a2 + 68);
  v3 = this + 72;
  v4 = a2 - (_DWORD)this;
  v5 = 40;
  do
  {
    *v3 = *(_DWORD *)((char *)v3 + v4);
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = this + 232;
  v7 = 40;
  do
  {
    *v6 = v6[v4];
    ++v6;
    --v7;
  }
  while ( v7 );
  this[272] = *(_BYTE *)(a2 + 272);
  this[273] = *(_BYTE *)(a2 + 273);
  *((_DWORD *)this + 69) = *(_DWORD *)(a2 + 276);
  return this;
}
