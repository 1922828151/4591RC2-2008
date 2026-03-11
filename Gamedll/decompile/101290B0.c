/*
 * func-name: sub_101290B0
 * func-address: 0x101290b0
 * callers: 0x10018165
 * callees: 0x102c9d50, 0x102c9d98
 */

int __thiscall sub_101290B0(Texture **this, int a2)
{
  Texture **v3; // edi
  Texture *v4; // edi
  Texture *v5; // eax
  Texture *v6; // eax
  int v7; // edi
  void (__thiscall *v8)(int, Texture *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int); // edx
  Texture *v10; // [esp-18h] [ebp-64h]
  _DWORD v11[7]; // [esp-14h] [ebp-60h] BYREF
  _DWORD v12[7]; // [esp+8h] [ebp-44h] BYREF
  int v13; // [esp+24h] [ebp-28h]
  Texture *v14; // [esp+38h] [ebp-14h]
  _DWORD *v15; // [esp+3Ch] [ebp-10h]
  int v16; // [esp+48h] [ebp-4h]

  v3 = this + 14;
  if ( (unsigned __int8)std::operator!=<char>(a2, this + 14) )
  {
    std::string::operator=(v3, this + 7);
    v4 = this[22];
    if ( v4 )
    {
      Texture::~Texture(this[22]);
      operator delete(v4);
      this[22] = 0;
    }
    v5 = (Texture *)operator new(0x9Cu);
    v14 = v5;
    v16 = 0;
    if ( v5 )
      v6 = Texture::Texture(v5);
    else
      v6 = 0;
    v16 = -1;
    this[22] = v6;
    v13 = 40;
    v14 = (Texture *)v12;
    v7 = Canvas::Instance();
    std::string::string(v12, "Arial");
    v15 = v11;
    v16 = 1;
    std::string::string(v11, this + 7);
    v8 = *(void (__thiscall **)(int, Texture *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v7 + 148);
    v10 = this[22];
    v16 = -1;
    v8(
      v7,
      v10,
      v11[0],
      v11[1],
      v11[2],
      v11[3],
      v11[4],
      v11[5],
      v11[6],
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v13);
  }
  return std::string::operator=(this + 7, a2);
}
