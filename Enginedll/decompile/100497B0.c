/*
 * func-name: ?GetInt@XMLSystem@@QAEHPAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x100497b0
 * callers: 0x100373d0, 0x10037b30, 0x100384a0, 0x1003a4c0, 0x10040990, 0x100412c0, 0x10041980, 0x10044cf0, 0x1004a8d0, 0x1004bcb0, 0x100e6db0, 0x1010b240, 0x1014a750, 0x1014c910, 0x1014cc50, 0x1014cfa0, 0x1014d2f0, 0x1014d460
 * callees: 0x100492d0, 0x100956d0
 */

int __thiscall XMLSystem::GetInt(XMLSystem *this, struct xercesc_2_5::DOMNode *a2, char *EndPtr)
{
  const char *v3; // eax
  int v4; // esi
  char *v5; // eax
  const char *v6; // eax
  _BYTE v8[28]; // [esp+4h] [ebp-28h] BYREF
  int v9; // [esp+28h] [ebp-4h]

  XMLSystem::GetString((int)v8, (int *)a2, EndPtr);
  v9 = 0;
  *errno() = 0;
  v3 = (const char *)std::string::c_str(v8);
  v4 = strtol(v3, &EndPtr, 10);
  v5 = (char *)std::string::c_str(v8);
  if ( EndPtr == v5 )
  {
    v6 = (const char *)std::string::c_str(v8);
    Error("XMLSystem::GetInt: The value for the node was invalid: '%s'", v6);
  }
  v9 = -1;
  std::string::~string(v8);
  return v4;
}
