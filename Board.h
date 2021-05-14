#ifndef BOARD_H
#define BOARD_H

class Figure;

class Board
{
    public:
        /** Constructor */
        Board(int size = 8);
        /** Default destructor */
        ~Board();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Board(const Board& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Board& operator=(const Board& other);

        /** Access m_Size
         * \return The current value of m_Size
         */
        int GetSize() { return m_Size; }

    protected:

    private:
        int m_Size; //!< Member variable "m_Size"
        Figure*** m_Board;
};

#endif // BOARD_H
