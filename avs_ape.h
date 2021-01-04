// base class to derive from
class C_RBASE {
	public:
		C_RBASE() { }
		virtual ~C_RBASE() { };
		virtual int render(char visdata[2][2][576], int isBeat, int *framebuffer, int *fbout, int w, int h)=0; // returns 1 if fbout has dest, 0 if framebuffer has dest
		virtual HWND conf(HINSTANCE hInstance, HWND hwndParent){return 0;};
		virtual char *get_desc()=0;
		virtual void load_config(unsigned char *data, int len) { }
		virtual int  save_config(unsigned char *data) { return 0; }
};
