/*
 * func-name: ?Reset@SkySettings@@QAEXXZ
 * func-address: 0x10137300
 * callers: 0x10017ba0, 0x1013e2e0
 * callees: none
 */

void __thiscall SkySettings::Reset(SkySettings *this)
{
  *((float *)this + 20) = 14.5;
  *((float *)this + 21) = -1.0;
  *(_BYTE *)this = 0;
  *((_BYTE *)this + 1) = 0;
  *((float *)this + 22) = 1.0;
  *((float *)this + 23) = -1.0;
  std::string::operator=((char *)this + 108, "SkyControllerDemo");
  *((float *)this + 1) = 20.0;
  *((_BYTE *)this + 2) = 0;
  std::string::operator=((char *)this + 136, "Sky.fx");
  std::string::operator=((char *)this + 164, "SkyBox_BlendedBG");
  *((float *)this + 2) = 0.40000001;
  std::string::operator=((char *)this + 192, "SkyLight");
  std::string::operator=((char *)this + 220, "MoonLight");
  std::string::operator=((char *)this + 248, "SkyBox_Moon");
  std::string::operator=((char *)this + 276, "moon.dds");
  *((float *)this + 3) = -180.0;
  *((float *)this + 4) = 12.0;
  *((float *)this + 5) = -12.0;
  std::string::operator=((char *)this + 304, "SkyBox_Sun");
  std::string::operator=((char *)this + 332, "sun.dds");
  *((float *)this + 6) = 480.0;
  *((float *)this + 7) = 12.0;
  *((float *)this + 8) = 12.0;
  *((float *)this + 125) = 1.0;
  std::string::operator=((char *)this + 360, "SkyEnv");
  std::string::operator=((char *)this + 388, "SkySHenv");
  *((_DWORD *)this + 9) = 4;
  *((_BYTE *)this + 40) = 1;
  std::string::operator=((char *)this + 416, "CloudDome.reb");
  std::string::operator=((char *)this + 444, "SkyClouds");
  std::string::operator=((char *)this + 472, "SkyBox_Clouds");
  *((float *)this + 11) = 0.0;
  *((_BYTE *)this + 41) = 0;
  *((_BYTE *)this + 56) = 1;
  *((float *)this + 12) = 360.0;
  *((float *)this + 13) = 1.0;
  *((float *)this + 15) = 1.0;
  *((_BYTE *)this + 57) = 1;
  *((float *)this + 16) = 1.0;
  *((float *)this + 17) = 1.0;
  *((float *)this + 18) = 1.0;
  *((float *)this + 24) = 1.0;
  *((float *)this + 25) = 1.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 26) = -1.0;
}
