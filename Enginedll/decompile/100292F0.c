/*
 * func-name: ??0PRTSettings@@QAE@ABU0@@Z
 * func-address: 0x100292f0
 * callers: 0x100296d0, 0x10030270, 0x1007c3c0
 * callees: 0x1000f380, 0x10025760
 */

PRTSettings *__thiscall PRTSettings::PRTSettings(PRTSettings *this, const struct PRTSettings *a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  qmemcpy((char *)this + 1, (char *)a2 + 1, 0x208u);
  qmemcpy((char *)this + 521, (char *)a2 + 521, 0x208u);
  qmemcpy((char *)this + 1041, (char *)a2 + 1041, 0x27Eu);
  qmemcpy((char *)this + 1679, (char *)a2 + 1679, 0x218u);
  std::vector<EditorVar>::vector<EditorVar>((int)this + 2215, (int)a2 + 2215);
  sub_1000F380((int)this + 2231, (int)a2 + 2231);
  sub_1000F380((int)this + 2247, (int)a2 + 2247);
  std::string::string((char *)this + 2263, (char *)a2 + 2263);
  return this;
}
