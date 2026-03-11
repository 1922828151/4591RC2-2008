/*
 * func-name: sub_100193A0
 * func-address: 0x100193a0
 * callers: none
 * callees: 0x100e2550
 */

void __thiscall sub_100193A0(_BYTE *this, char *a2)
{
  xercesc_2_5::SAXParseException *v2; // esi
  const unsigned __int16 *v3; // eax
  const unsigned __int16 *SystemId; // eax
  int LineNumber; // eax
  int ColumnNumber; // [esp-8h] [ebp-20h]
  const char *v7; // [esp-4h] [ebp-1Ch]
  char *v8; // [esp+8h] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v2 = (xercesc_2_5::SAXParseException *)a2;
  this[4] = 1;
  v3 = (const unsigned __int16 *)(*(int (__thiscall **)(xercesc_2_5::SAXParseException *))(*(_DWORD *)v2 + 4))(v2);
  a2 = xercesc_2_5::XMLString::transcode(v3);
  v9 = 0;
  SystemId = xercesc_2_5::SAXParseException::getSystemId(v2);
  v8 = xercesc_2_5::XMLString::transcode(SystemId);
  v7 = a2;
  ColumnNumber = xercesc_2_5::SAXParseException::getColumnNumber(v2);
  LineNumber = xercesc_2_5::SAXParseException::getLineNumber(v2);
  LogPrintf("Error at file \"%s\", line %d, column %d, Message: \"%s\"", v8, LineNumber, ColumnNumber, v7);
  xercesc_2_5::XMLString::release(&v8);
  v9 = -1;
  xercesc_2_5::XMLString::release(&a2);
}
