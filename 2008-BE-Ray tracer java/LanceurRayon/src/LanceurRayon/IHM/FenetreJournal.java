/*
 * FenetreJournal.java
 *
 * Created on 18 mars 2008, 11:48
 */

package LanceurRayon.IHM;

import LanceurRayon.LanceurRayonApp;
import java.util.logging.Logger;

/**
 *
 * @author  Lecrubier
 */
public class FenetreJournal extends javax.swing.JFrame {
	
	/** Creates new form FenetreJournal */
	public FenetreJournal(String texte) {
		initComponents();
		TexteJournal.setText(texte);
	}

	public void setText(String t) {
		TexteJournal.setText(t);
	}
	
	
	
	/** This method is called from within the constructor to
	 * initialize the form.
	 * WARNING: Do NOT modify this code. The content of this method is
	 * always regenerated by the Form Editor.
	 */
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        TexteJournal = new javax.swing.JTextPane();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
        org.jdesktop.application.ResourceMap resourceMap = org.jdesktop.application.Application.getInstance(LanceurRayon.LanceurRayonApp.class).getContext().getResourceMap(FenetreJournal.class);
        setTitle(resourceMap.getString("Form.title")); // NOI18N
        setIconImage(LanceurRayonApp.getInstance(LanceurRayon.LanceurRayonApp.class).getContext().getResourceMap(LanceurRayonApp.class).getImageIcon("Application.icon").getImage());
        setName("Form"); // NOI18N

        jScrollPane1.setName("jScrollPane1"); // NOI18N

        TexteJournal.setEditable(false);
        TexteJournal.setName("TexteJournal"); // NOI18N
        jScrollPane1.setViewportView(TexteJournal);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 608, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 489, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

	
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextPane TexteJournal;
    private javax.swing.JScrollPane jScrollPane1;
    // End of variables declaration//GEN-END:variables
	
}
