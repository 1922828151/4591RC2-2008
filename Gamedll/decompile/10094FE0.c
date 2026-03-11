/*
 * func-name: ??0CameraHandler@@QAE@ABV0@@Z_0
 * func-address: 0x10094fe0
 * callers: 0x1001a81b
 * callees: none
 */

CameraHandler *__thiscall CameraHandler::CameraHandler(CameraHandler *this, const struct CameraHandler *a2)
{
  CameraHandler *result; // eax

  Camera::Camera(this, a2);
  *((_BYTE *)this + 420) = *((_BYTE *)a2 + 420);
  *((_BYTE *)this + 421) = *((_BYTE *)a2 + 421);
  *((float *)this + 106) = *((float *)a2 + 106);
  *((float *)this + 107) = *((float *)a2 + 107);
  *((float *)this + 108) = *((float *)a2 + 108);
  *((float *)this + 109) = *((float *)a2 + 109);
  *((_DWORD *)this + 110) = *((_DWORD *)a2 + 110);
  *((_DWORD *)this + 111) = *((_DWORD *)a2 + 111);
  *((_DWORD *)this + 112) = *((_DWORD *)a2 + 112);
  *((_DWORD *)this + 113) = *((_DWORD *)a2 + 113);
  *((_DWORD *)this + 114) = *((_DWORD *)a2 + 114);
  *((_DWORD *)this + 115) = *((_DWORD *)a2 + 115);
  *((_DWORD *)this + 116) = *((_DWORD *)a2 + 116);
  *((_DWORD *)this + 117) = *((_DWORD *)a2 + 117);
  *((_DWORD *)this + 118) = *((_DWORD *)a2 + 118);
  *((float *)this + 119) = *((float *)a2 + 119);
  *((float *)this + 120) = *((float *)a2 + 120);
  *((_BYTE *)this + 484) = *((_BYTE *)a2 + 484);
  *((float *)this + 122) = 0.0;
  *((float *)this + 123) = 0.0;
  *((float *)this + 124) = 0.0;
  *((float *)this + 126) = 0.0;
  *((float *)this + 127) = 0.0;
  *((float *)this + 128) = 0.0;
  *((float *)this + 130) = 0.0;
  *((float *)this + 131) = 0.0;
  *((float *)this + 132) = 0.0;
  *((float *)this + 134) = 0.0;
  *((float *)this + 135) = 0.0;
  *((float *)this + 136) = 0.0;
  qmemcpy((char *)this + 488, (char *)a2 + 488, 0x40u);
  *((float *)this + 138) = 0.0;
  *((float *)this + 139) = 0.0;
  *((float *)this + 140) = 0.0;
  *((float *)this + 142) = 0.0;
  *((float *)this + 143) = 0.0;
  *((float *)this + 144) = 0.0;
  *((float *)this + 146) = 0.0;
  *((float *)this + 147) = 0.0;
  *((float *)this + 148) = 0.0;
  *((float *)this + 150) = 0.0;
  *((float *)this + 151) = 0.0;
  *((float *)this + 152) = 0.0;
  qmemcpy((char *)this + 552, (char *)a2 + 552, 0x40u);
  *((float *)this + 154) = 0.0;
  *((float *)this + 155) = 0.0;
  *((float *)this + 156) = 0.0;
  *((float *)this + 158) = 0.0;
  *((float *)this + 159) = 0.0;
  *((float *)this + 160) = 0.0;
  result = this;
  *((float *)this + 162) = 0.0;
  *((float *)this + 163) = 0.0;
  *((float *)this + 164) = 0.0;
  *((float *)this + 166) = 0.0;
  *((float *)this + 167) = 0.0;
  *((float *)this + 168) = 0.0;
  qmemcpy((char *)this + 616, (char *)a2 + 616, 0x48u);
  *((float *)this + 172) = 0.0;
  *((float *)this + 173) = 0.0;
  *((float *)this + 174) = 0.0;
  *((float *)this + 176) = 0.0;
  *((float *)this + 177) = 0.0;
  *((float *)this + 178) = 0.0;
  *((float *)this + 180) = 0.0;
  *((float *)this + 181) = 0.0;
  *((float *)this + 182) = 0.0;
  *((float *)this + 184) = 0.0;
  *((float *)this + 185) = 0.0;
  *((float *)this + 186) = 0.0;
  qmemcpy((char *)this + 688, (char *)a2 + 688, 0x44u);
  return result;
}
