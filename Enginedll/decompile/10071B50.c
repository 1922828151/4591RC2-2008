/*
 * func-name: ??4CREPictureButton@@QAEAAV0@ABV0@@Z
 * func-address: 0x10071b50
 * callers: none
 * callees: 0x10071a20
 */

_DWORD *__thiscall CREPictureButton::operator=(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  int v9; // edx

  CREButton::operator=((int)this, a2);
  v3 = this + 204;
  v4 = a2 - (_DWORD)this;
  v5 = 16;
  do
  {
    *v3 = *(_DWORD *)((char *)v3 + v4);
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = this + 220;
  v7 = 16;
  do
  {
    *v6 = *(_DWORD *)((char *)v6 + v4);
    v6[1] = *(_DWORD *)((char *)v6 + v4 + 4);
    v6[2] = *(_DWORD *)((char *)v6 + v4 + 8);
    v6[3] = *(_DWORD *)((char *)v6 + v4 + 12);
    v6 += 4;
    --v7;
  }
  while ( v7 );
  v8 = this + 284;
  v9 = 16;
  do
  {
    *v8 = *(_DWORD *)((char *)v8 + v4);
    ++v8;
    --v9;
  }
  while ( v9 );
  return this;
}
