/*
 * func-name: ?GetBool@XMLSystem@@QAE_NPAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x10049910
 * callers: 0x100373d0, 0x10038ca0, 0x1003a4c0, 0x10040990, 0x100412c0, 0x10041980, 0x10045740, 0x1004a8d0, 0x1004bcb0, 0x100e6db0, 0x1014a750, 0x1014cc50, 0x1014cfa0, 0x1014da70, 0x1014dc70
 * callees: 0x100492d0, 0x100956d0
 */

char __thiscall XMLSystem::GetBool(XMLSystem *this, struct xercesc_2_5::DOMNode *a2, char *a3)
{
  const char *v3; // eax
  _BYTE v5[28]; // [esp+4h] [ebp-28h] BYREF
  int v6; // [esp+28h] [ebp-4h]

  XMLSystem::GetString((int)v5, (int *)a2, a3);
  v6 = 0;
  if ( (unsigned __int8)std::operator==<char>(v5, "true") || (unsigned __int8)std::operator==<char>(v5, "1") )
  {
    v6 = -1;
    std::string::~string(v5);
    return 1;
  }
  else
  {
    if ( !(unsigned __int8)std::operator==<char>(v5, "false") && !(unsigned __int8)std::operator==<char>(v5, "0") )
    {
      v3 = (const char *)std::string::c_str(v5);
      Error("XMLSystem::GetBool: The value for the node was invalid: '%s'", v3);
    }
    v6 = -1;
    std::string::~string(v5);
    return 0;
  }
}
