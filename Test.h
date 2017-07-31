typedef struct 
{
	/** The eyecatcher for this structure.  Must be MQTS */
	const char struct_id[3];
	/** The version number of this structure.  Must be 0 */
	int struct_version;	
	
	/** The file in PEM format containing the public digital certificates trusted by the client. */
	const char* pub_key;

	/** The file in PEM format containing the public certificate chain of the client. It may also include
	* the client's private key. 
	*/
	const char* priv_key;
	
	/** If not included in the sslKeyStore, this setting points to the file in PEM format containing
	* the client's private key.
	*/
	const char* policy;
	/** If not included in the sslKeyStore, this setting points to the file in PEM format containing
	* the client's private key.
	*/
	int security;
	/** The password to load the client's privateKey if encrypted. */
	int uppercase;
	/** to uppercase  */
} Bee_BeeOptions;

#define Bee_BeeOptions_initializer { {'B', 'E', 'E'}, 0, NULL, NULL, NULL,0,0}
