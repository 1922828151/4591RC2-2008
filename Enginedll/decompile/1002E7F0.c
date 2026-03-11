/*
 * func-name: ??0Material@@QAE@ABV0@@Z
 * func-address: 0x1002e7f0
 * callers: none
 * callees: 0x1000f380, 0x10023570, 0x10025760, 0x1002c700, 0x1002c800
 */

Material *__thiscall Material::Material(Material *this, const struct Material *a2)
{
  sub_1002C700((int)this, (int)a2);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  sub_1002C800((int)this + 20, (int)a2 + 20);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  std::string::string((char *)this + 56, (char *)a2 + 56);
  std::vector<EditorVar>::vector<EditorVar>((int)this + 84, (int)a2 + 84);
  sub_1000F380((int)this + 100, (int)a2 + 100);
  std::string::string((char *)this + 116, (char *)a2 + 116);
  *((_BYTE *)this + 144) = *((_BYTE *)a2 + 144);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  std::string::string((char *)this + 156, (char *)a2 + 156);
  std::string::string((char *)this + 184, (char *)a2 + 184);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  std::string::string((char *)this + 220, (char *)a2 + 220);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  *((_DWORD *)this + 63) = *((_DWORD *)a2 + 63);
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
  *((_BYTE *)this + 264) = *((_BYTE *)a2 + 264);
  *((_BYTE *)this + 265) = *((_BYTE *)a2 + 265);
  *((_BYTE *)this + 266) = *((_BYTE *)a2 + 266);
  *((float *)this + 67) = *((float *)a2 + 67);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  sub_10023570((_DWORD *)this + 69, (int)a2 + 276);
  std::string::string((char *)this + 292, (char *)a2 + 292);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((_BYTE *)this + 324) = *((_BYTE *)a2 + 324);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 82);
  *((_DWORD *)this + 83) = *((_DWORD *)a2 + 83);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
  return this;
}
