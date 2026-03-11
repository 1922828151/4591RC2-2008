/*
 * func-name: ??0C3DModel@@QAE@ABV0@@Z
 * func-address: 0x10074170
 * callers: none
 * callees: 0x10010f10, 0x10071230
 */

C3DModel *__thiscall C3DModel::C3DModel(C3DModel *this, const struct C3DModel *a2)
{
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &C3DModel::`vftable';
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 133);
  Camera::Camera((C3DModel *)((char *)this + 536), (const struct C3DModel *)((char *)a2 + 536));
  std::string::string((char *)this + 956, (char *)a2 + 956);
  std::string::string((char *)this + 984, (char *)a2 + 984);
  *((_DWORD *)this + 253) = *((_DWORD *)a2 + 253);
  *((_DWORD *)this + 254) = *((_DWORD *)a2 + 254);
  *((_DWORD *)this + 255) = *((_DWORD *)a2 + 255);
  *((_DWORD *)this + 256) = *((_DWORD *)a2 + 256);
  *((_DWORD *)this + 257) = *((_DWORD *)a2 + 257);
  *((_DWORD *)this + 258) = *((_DWORD *)a2 + 258);
  *((_DWORD *)this + 259) = *((_DWORD *)a2 + 259);
  *((_DWORD *)this + 260) = *((_DWORD *)a2 + 260);
  *((_DWORD *)this + 261) = *((_DWORD *)a2 + 261);
  *((_BYTE *)this + 1048) = *((_BYTE *)a2 + 1048);
  *((float *)this + 263) = *((float *)a2 + 263);
  *((_BYTE *)this + 1056) = *((_BYTE *)a2 + 1056);
  *((_BYTE *)this + 1057) = *((_BYTE *)a2 + 1057);
  *((_BYTE *)this + 1058) = *((_BYTE *)a2 + 1058);
  *((_DWORD *)this + 265) = *((_DWORD *)a2 + 265);
  *((_DWORD *)this + 266) = *((_DWORD *)a2 + 266);
  *((_DWORD *)this + 267) = *((_DWORD *)a2 + 267);
  *((float *)this + 268) = *((float *)a2 + 268);
  *((float *)this + 269) = *((float *)a2 + 269);
  *((_DWORD *)this + 270) = *((_DWORD *)a2 + 270);
  *((_DWORD *)this + 271) = *((_DWORD *)a2 + 271);
  return this;
}
