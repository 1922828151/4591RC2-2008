/*
 * func-name: ?GetFloat@XMLSystem@@QAEMPAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x10049860
 * callers: 0x10036a40, 0x100373d0, 0x100384a0, 0x1003a4c0, 0x1003ef60, 0x10040990, 0x100412c0, 0x10041980, 0x10044cf0, 0x10047270, 0x1004a8d0, 0x1004bcb0, 0x100e6db0, 0x10149660, 0x1014a750, 0x1014da70, 0x1014dc70
 * callees: 0x100492d0, 0x100956d0
 */

double __thiscall XMLSystem::GetFloat(XMLSystem *this, struct xercesc_2_5::DOMNode *a2, char *EndPtr)
{
  const char *v3; // eax
  char *v4; // eax
  const char *v5; // eax
  _BYTE v7[28]; // [esp+0h] [ebp-28h] BYREF
  int v8; // [esp+24h] [ebp-4h]
  float v9; // [esp+2Ch] [ebp+4h]

  XMLSystem::GetString((int)v7, (int *)a2, EndPtr);
  v8 = 0;
  *errno() = 0;
  v3 = (const char *)std::string::c_str(v7);
  v9 = strtod(v3, &EndPtr);
  v4 = (char *)std::string::c_str(v7);
  if ( EndPtr == v4 )
  {
    v5 = (const char *)std::string::c_str(v7);
    Error("XMLSystem::GetInt: The value for the node was invalid: '%s'", v5);
  }
  v8 = -1;
  std::string::~string(v7);
  return v9;
}
